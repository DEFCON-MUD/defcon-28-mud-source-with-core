inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 64, 8 }));
  set_short( "Passage - x6y64z8" );
set_objects( DIR+"/monsters/outfitterrobot.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y64z8.c",
  "east" : DIR+"/rooms/x7y64z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
