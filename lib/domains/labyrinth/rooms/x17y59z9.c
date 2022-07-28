inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 59, 9 }));
  set_short( "Passage - x17y59z9" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y60z9.c",
  "south" : DIR+"/rooms/x17y58z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
