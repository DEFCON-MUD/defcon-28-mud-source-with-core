inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 22, 9 }));
  set_short( "Hallway - x53y22z9" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y23z9.c",
  "south" : DIR+"/rooms/x53y21z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
