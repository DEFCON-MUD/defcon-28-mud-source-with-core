inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 19, 7 }));
  set_short( "Passage - x53y19z7" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y20z7.c",
  "south" : DIR+"/rooms/x53y18z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
