inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 36, 6 }));
  set_short( "Passage - x31y36z6" );
set_objects( DIR+"/npc/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y36z6.c",
  "east" : DIR+"/rooms/x32y36z6.c",
  "south" : DIR+"/rooms/x31y35z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
