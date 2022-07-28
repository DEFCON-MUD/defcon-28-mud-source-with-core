inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 25, 5 }));
  set_short( "Hallway - x21y25z5" );
set_objects( DIR+"/npc/mosquito.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y26z5.c",
  "south" : DIR+"/rooms/x21y24z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
