inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 50, 6 }));
  set_short( "Passage - x45y50z6" );
set_objects( DIR+"/monsters/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y50z6.c",
  "north" : DIR+"/rooms/x45y51z6.c",
  "south" : DIR+"/rooms/x45y49z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
