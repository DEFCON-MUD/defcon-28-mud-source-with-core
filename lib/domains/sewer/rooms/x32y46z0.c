inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 46, 0 }));
  set_short( "Corridor - x32y46z0" );
set_objects( DIR+"/monsters/professor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y46z0.c",
  "east" : DIR+"/rooms/x33y46z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
