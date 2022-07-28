inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 8, 9 }));
  set_short( "Passage - x45y8z9" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y8z9.c",
  "east" : DIR+"/rooms/x46y8z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
