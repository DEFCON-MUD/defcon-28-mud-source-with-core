inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 54, 4 }));
  set_short( "Passage - x43y54z4" );
set_objects( DIR+"/monsters/angryweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y54z4.c",
  "south" : DIR+"/rooms/x43y53z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
