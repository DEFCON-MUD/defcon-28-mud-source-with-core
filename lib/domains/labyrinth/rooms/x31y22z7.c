inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 22, 7 }));
  set_short( "Passage - x31y22z7" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y22z7.c",
  "north" : DIR+"/rooms/x31y23z7.c",
  "south" : DIR+"/rooms/x31y21z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
