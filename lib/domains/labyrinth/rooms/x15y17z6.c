inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 17, 6 }));
  set_short( "Passage - x15y17z6" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y18z6.c",
  "south" : DIR+"/rooms/x15y16z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
