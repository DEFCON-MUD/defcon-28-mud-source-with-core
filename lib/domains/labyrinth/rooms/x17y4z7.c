inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 4, 7 }));
  set_short( "Passage - x17y4z7" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y5z7.c",
  "south" : DIR+"/rooms/x17y3z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
