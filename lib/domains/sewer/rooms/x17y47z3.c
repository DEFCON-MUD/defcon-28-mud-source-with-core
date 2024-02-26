inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 47, 3 }));
  set_short( "Corridor - x17y47z3" );
set_objects( DIR+"/monsters/carson.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y48z3.c",
  "south" : DIR+"/rooms/x17y46z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
