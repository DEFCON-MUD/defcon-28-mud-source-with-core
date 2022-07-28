inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 48, 1 }));
  set_short( "Passage - x37y48z1" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y49z1.c",
  "south" : DIR+"/rooms/x37y47z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
