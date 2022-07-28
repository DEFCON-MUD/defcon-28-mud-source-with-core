inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 0, 9 }));
  set_short( "Passage - x6y0z9" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y0z9.c",
  "east" : DIR+"/rooms/x7y0z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the crud in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
