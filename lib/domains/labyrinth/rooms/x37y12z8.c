inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 12, 8 }));
  set_short( "Passage - x37y12z8" );
set_objects( DIR+"/npc/zombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y13z8.c",
  "south" : DIR+"/rooms/x37y11z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the sludge in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
