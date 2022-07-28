inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 44, 9 }));
  set_short( "Passage - x47y44z9" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y44z9.c",
  "south" : DIR+"/rooms/x47y43z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the glorzo in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
