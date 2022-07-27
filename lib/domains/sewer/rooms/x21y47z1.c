inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 47, 1 }));
  set_short( "Passage - x21y47z1" );
set_objects( DIR+"/monsters/outfitterrobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y48z1.c",
  "south" : DIR+"/rooms/x21y46z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
