inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 13, 5 }));
  set_short( "Corridor - x31y13z5" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y14z5.c",
  "south" : DIR+"/rooms/x31y12z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
