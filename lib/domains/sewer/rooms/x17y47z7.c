inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 47, 7 }));
  set_short( "Passage - x17y47z7" );
set_objects( DIR+"/monsters/greenslime.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y48z7.c",
  "south" : DIR+"/rooms/x17y46z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the radioactive waste in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
