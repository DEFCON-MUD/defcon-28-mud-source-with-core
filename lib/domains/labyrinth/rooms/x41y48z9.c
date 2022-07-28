inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 48, 9 }));
  set_short( "Passage - x41y48z9" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y48z9.c",
  "east" : DIR+"/rooms/x42y48z9.c",
  "north" : DIR+"/rooms/x41y49z9.c",
  "south" : DIR+"/rooms/x41y47z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, east, north, and west.%^RESET%^");
}
