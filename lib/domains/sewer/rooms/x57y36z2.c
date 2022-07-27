inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 36, 2 }));
  set_short( "Hallway - x57y36z2" );
set_objects( DIR+"/monsters/professor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y37z2.c",
  "south" : DIR+"/rooms/x57y35z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
