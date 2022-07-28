inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 18, 6 }));
  set_short( "Corridor - x47y18z6" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y18z6.c",
  "north" : DIR+"/rooms/x47y19z6.c",
  "south" : DIR+"/rooms/x47y17z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, north, and west.%^RESET%^");
}
