inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 50, 1 }));
  set_short( "Passage - x13y50z1" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y50z1.c",
  "north" : DIR+"/rooms/x13y51z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
