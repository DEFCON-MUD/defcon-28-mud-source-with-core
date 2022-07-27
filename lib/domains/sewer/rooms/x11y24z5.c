inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 24, 5 }));
  set_short( "Corridor - x11y24z5" );
set_objects( DIR+"/monsters/bol.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y24z5.c",
  "south" : DIR+"/rooms/x11y23z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
