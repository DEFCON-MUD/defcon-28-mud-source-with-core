inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 30, 6 }));
  set_short( "Passage - x37y30z6" );
set_objects( DIR+"/npc/evilclown.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y30z6.c",
  "north" : DIR+"/rooms/x37y31z6.c",
  "south" : DIR+"/rooms/x37y29z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
