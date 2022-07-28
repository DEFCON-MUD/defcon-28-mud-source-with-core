inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 22, 6 }));
  set_short( "Hallway - x25y22z6" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y22z6.c",
  "north" : DIR+"/rooms/x25y23z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
