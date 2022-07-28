inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 50, 9 }));
  set_short( "Hallway - x19y50z9" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y50z9.c",
  "north" : DIR+"/rooms/x19y51z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
