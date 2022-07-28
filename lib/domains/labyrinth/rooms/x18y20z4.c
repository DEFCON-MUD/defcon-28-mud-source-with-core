inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 20, 4 }));
  set_short( "Passage - x18y20z4" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y20z4.c",
  "east" : DIR+"/rooms/x19y20z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
