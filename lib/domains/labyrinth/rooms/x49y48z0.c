inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 48, 0 }));
  set_short( "Passage - x49y48z0" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y48z0.c",
  "north" : DIR+"/rooms/x49y49z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
