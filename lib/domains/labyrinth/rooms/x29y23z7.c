inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 23, 7 }));
  set_short( "Hallway - x29y23z7" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y24z7.c",
  "south" : DIR+"/rooms/x29y22z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
