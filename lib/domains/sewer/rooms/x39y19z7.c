inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 19, 7 }));
  set_short( "Passage - x39y19z7" );
set_objects( DIR+"/monsters/john.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y20z7.c",
  "south" : DIR+"/rooms/x39y18z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
