inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 64, 4 }));
  set_short( "Passage - x1y64z4" );
set_objects( DIR+"/monsters/greenslime.c");
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^}
