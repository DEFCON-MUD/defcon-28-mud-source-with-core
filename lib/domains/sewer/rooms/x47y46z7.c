inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 46, 7 }));
  set_short( "Corridor - x47y46z7" );
set_objects( DIR+"/monsters/andy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y46z7.c",
  "south" : DIR+"/rooms/x47y45z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
