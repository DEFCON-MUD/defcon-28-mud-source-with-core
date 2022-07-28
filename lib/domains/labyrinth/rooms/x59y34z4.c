inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 34, 4 }));
  set_short( "Passage - x59y34z4" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y34z4.c",
  "north" : DIR+"/rooms/x59y35z4.c",
  "south" : DIR+"/rooms/x59y33z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
