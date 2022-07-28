inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 48, 0 }));
  set_short( "Corridor - x33y48z0" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y48z0.c",
  "east" : DIR+"/rooms/x34y48z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
