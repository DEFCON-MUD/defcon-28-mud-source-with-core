inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 60, 9 }));
  set_short( "Passage - x7y60z9" );
set_objects( DIR+"/monsters/slug.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y61z9.c",
  "south" : DIR+"/rooms/x7y59z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
