inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 36, 4 }));
  set_short( "Passage - x47y36z4" );
set_objects( DIR+"/monsters/surityoffer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y37z4.c",
  "south" : DIR+"/rooms/x47y35z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
