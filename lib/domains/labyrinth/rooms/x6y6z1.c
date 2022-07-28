inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 6, 1 }));
  set_short( "Corridor - x6y6z1" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y6z1.c",
  "east" : DIR+"/rooms/x7y6z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
