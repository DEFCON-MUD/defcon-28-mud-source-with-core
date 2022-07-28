inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 32, 4 }));
  set_short( "Passage - x61y32z4" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y33z4.c",
  "south" : DIR+"/rooms/x61y31z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
