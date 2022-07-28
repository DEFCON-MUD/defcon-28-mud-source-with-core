inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 3, 7 }));
  set_short( "Hallway - x45y3z7" );
set_objects( DIR+"/npc/biddleman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y4z7.c",
  "south" : DIR+"/rooms/x45y2z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
