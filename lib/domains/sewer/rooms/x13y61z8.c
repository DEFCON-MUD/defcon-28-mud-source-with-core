inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 61, 8 }));
  set_short( "Hallway - x13y61z8" );
set_objects( DIR+"/monsters/brian.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y62z8.c",
  "south" : DIR+"/rooms/x13y60z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
