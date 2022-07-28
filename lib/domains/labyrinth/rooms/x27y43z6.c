inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 43, 6 }));
  set_short( "Passage - x27y43z6" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y44z6.c",
  "south" : DIR+"/rooms/x27y42z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
