inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 2, 1 }));
  set_short( "Hallway - x2y2z1" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y2z1.c",
  "east" : DIR+"/rooms/x3y2z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
