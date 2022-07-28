inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 8, 4 }));
  set_short( "Passage - x7y8z4" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y9z4.c",
  "south" : DIR+"/rooms/x7y7z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
