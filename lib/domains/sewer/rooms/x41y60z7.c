inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 60, 7 }));
  set_short( "Passage - x41y60z7" );
set_objects( DIR+"/monsters/kavi.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y60z7.c",
  "north" : DIR+"/rooms/x41y61z7.c",
  "south" : DIR+"/rooms/x41y59z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the radioactive waste in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
