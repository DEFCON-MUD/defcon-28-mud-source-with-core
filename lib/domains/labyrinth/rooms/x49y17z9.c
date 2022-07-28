inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 17, 9 }));
  set_short( "Corridor - x49y17z9" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "north" : DIR+"/rooms/x49y18z9.c",
  "south" : DIR+"/rooms/x49y16z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
