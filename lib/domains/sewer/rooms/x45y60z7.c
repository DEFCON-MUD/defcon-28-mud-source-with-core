inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 60, 7 }));
  set_short( "Passage - x45y60z7" );
set_objects( DIR+"/monsters/loser.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y60z7.c",
  "north" : DIR+"/rooms/x45y61z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
