inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 8, 7 }));
  set_short( "Passage - x23y8z7" );
set_objects( DIR+"/monsters/warrior.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y9z7.c",
  "south" : DIR+"/rooms/x23y7z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the radioactive waste in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
