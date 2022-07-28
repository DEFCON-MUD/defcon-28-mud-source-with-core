inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 20, 7 }));
  set_short( "Hallway - x18y20z7" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y20z7.c",
  "east" : DIR+"/rooms/x19y20z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
