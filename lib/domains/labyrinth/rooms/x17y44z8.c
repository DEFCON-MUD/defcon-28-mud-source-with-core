inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 44, 8 }));
  set_short( "Corridor - x17y44z8" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y44z8.c",
  "north" : DIR+"/rooms/x17y45z8.c",
  "south" : DIR+"/rooms/x17y43z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
