inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 51, 5 }));
  set_short( "Passage - x29y51z5" );
set_objects( DIR+"/monsters/autobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y52z5.c",
  "south" : DIR+"/rooms/x29y50z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
