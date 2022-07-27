inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 8, 5 }));
  set_short( "Passage - x21y8z5" );
set_objects( DIR+"/monsters/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y8z5.c",
  "north" : DIR+"/rooms/x21y9z5.c",
  "south" : DIR+"/rooms/x21y7z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
