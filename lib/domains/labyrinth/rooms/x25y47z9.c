inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 47, 9 }));
  set_short( "Corridor - x25y47z9" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y48z9.c",
  "south" : DIR+"/rooms/x25y46z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
